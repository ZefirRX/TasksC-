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

    std::string get_city() const {
        return city;
    }

    std::string get_output_address() const {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }
};

void sort(address** addresses, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (addresses[j]->get_city() > addresses[j + 1]->get_city()) {
                address* temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::ifstream fin("in.txt");
    if (!fin.is_open()) {
        std::cerr << "Файл не открыт" << std::endl;
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

    sort(addresses, n);

    std::ofstream fout("out.txt");
    if (!fout.is_open()) {
        std::cerr << "Файл не открыт" << std::endl;
        return 1;
    }

    fout << n << "\n";
    for (int i = 0; i < n; i++) {
        fout << addresses[i]->get_output_address() << "\n";
    }

    fout.close();

    for (int i = 0; i < n; i++) {
        delete addresses[i];
    }
    delete[] addresses;

    return 0;
}
