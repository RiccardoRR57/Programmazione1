#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream tf("ciao.cc");
    tf << "#include <iostream>\nusing namespace std;";
    tf << 
    "int main()\n" <<
        "\t{\n" <<
        "\tcout << \"Hello World!\" << endl;\n" <<
        "\treturn 0;\n" <<
    "}";
    system("./a.out");
    return 0;
}
