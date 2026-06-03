#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        std::cerr << "Usage: gen_table <input.txt> <output.cpp>\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if (!in) { std::cerr << "Cannot open: " << argv[1] << '\n'; return 1; }

    struct Row { std::string label, swedish, danish; };
    std::vector<Row> rows;

    std::string line;
    while (std::getline(in, line)) {
        if (line.empty() || line[0] == '#') continue;
        std::istringstream ss(line);
        Row r;
        ss >> r.label >> r.swedish >> r.danish;
        if (!r.label.empty())
            rows.push_back(r);
    }

    std::ofstream out(argv[2]);
    if (!out) { std::cerr << "Cannot open: " << argv[2] << '\n'; return 1; }

    out << "// Auto-generated from translations.txt -- do not edit\n";
    out << "//              SWEDISH    DANISH\n";
    out << "static const char *table[" << rows.size() << "][2] = {\n";
    for (auto &r : rows)
        out << "    /* " << r.label << " */  { \"" << r.swedish << "\", \"" << r.danish << "\" },\n";
    out << "};\n";

    return 0;
}
