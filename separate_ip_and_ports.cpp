#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

void separateIPandPorts(const std::string& inputFilename, const std::string& ipFilename, const std::string& portFilename) {
    std::ifstream inputFile(inputFilename);
    std::ofstream ipFile(ipFilename);
    std::ofstream portFile(portFilename);

    if (inputFile.is_open() && ipFile.is_open() && portFile.is_open()) {
        std::vector<std::pair<std::string, std::string>> ipPortPairs;

        std::string line;
        while (std::getline(inputFile, line)) {
            size_t colonPos = line.find(':');
            if (colonPos != std::string::npos) {
                std::string ip = line.substr(0, colonPos);
                std::string port = line.substr(colonPos + 1);
                ipPortPairs.push_back(std::make_pair(ip, port));
            }
        }

        std::sort(ipPortPairs.begin(), ipPortPairs.end());

        for (const auto& pair : ipPortPairs) {
            ipFile << pair.first << std::endl;
            portFile << pair.second << std::endl;
        }

        std::cout << "IP addresses and ports separated and sorted successfully." << std::endl;
    } else {
        std::cerr << "Error opening files." << std::endl;
    }

    inputFile.close();
    ipFile.close();
    portFile.close();
}

int main() {
    std::string inputFilename = "pars.txt";
    std::string ipFilename = "ip.txt";
    std::string portFilename = "port.txt";

    separateIPandPorts(inputFilename, ipFilename, portFilename);

    return 0;
}
