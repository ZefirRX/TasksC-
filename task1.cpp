#include <iostream>
#include <fstream>
#include <string>

class address {
private:
    std::string city;
    std::string street;
    int house;
    int apartment;

public:
    address(std::string city, std::string street, int house, int apartment)
        : city(city), street(street), house(house), apartment(apartment) {}

    std::string get_output_address() const {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }
};

int main() {
    std::ifstream fin("in.txt");
    if (!fin.is_open()) {
        std::cerr << "Cannot open in.txt" << std::endl;
        return 1;
    }

    int n;
    fin >> n;
    fin.ignore();

    address** addresses = new address*[n];

    for (int i = 0; i < n; i++) {
        std::string city, street;
        int house, apartment;
        std::getline(fin, city);
        std::getline(fin, street);
        fin >> house >> apartment;
        fin.ignore();
        addresses[i] = new address(city, street, house, apartment);
    }

    fin.close();

    std::ofstream fout("out.txt");
    if (!fout.is_open()) {
        std::cerr << "Cannot open out.txt" << std::endl;
        return 1;
    }

    fout << n << "\n";
    for (int i = n - 1; i >= 0; i--) {
        fout << addresses[i]->get_output_address() << "\n";
    }

    fout.close();

    for (int i = 0; i < n; i++) {
        delete addresses[i];
    }
    delete[] addresses;

    return 0;
}
