#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    const std::size_t nCmndLineArgs{cmdLineArgs.size()};

    bool helpRequested{false};

    for(std::size_t i{1}; i < nCmndLineArgs; ++i)
    {
        if (cmdLineArgs[i] == "-h" || cmdLineArgs[i] == "--help")
        {
            helpRequested==true;
        }
    }
    //doesnt work
    if (helpRequested)
    {
        std::cout<<"Seek Help Online"<<std::endl;
    }

    //works
    for(int i = 0; i < argc; i++)
    {
        std::cout << "Arg" << i << ": " << argv[i] << std::endl;
    }

    char in_char{'x'};
    std::string out_str{""};

    
    // Take each letter from user input and in each case(crtl + D to escape):
    while(std::cin >> in_char)
    {   
        // - Convert to upper case
        if (std::isalpha(in_char)) 
        {
            out_str += std::toupper(in_char);           
            continue;
        }
        // - Change numbers to words
        switch (in_char)
        {
            case '0':
                out_str += "ZERO";
                break;
            case '1':
                out_str += "ONE";
                break;
            case '2':
                out_str += "TWO";
                break;
            case '3':
                out_str += "THREE";
                break;
            case '4':
                out_str += "FOUR";
                break;
            case '5':
                out_str += "FIVE";
                break;
            case '6':
                out_str += "SIX";
                break;
            case '7':
                out_str += "SEVEN";
                break;
            case '8':
                out_str += "EIGHT";
                break;
            case '9':
                out_str += "NINE";
                break;
            default:
                break;
        }
        // - Ignore any other (non-alpha) characters
        // - In each case, add result to a string variable
    }
    std::cout << out_str << std::endl;
    // print out the new string
}