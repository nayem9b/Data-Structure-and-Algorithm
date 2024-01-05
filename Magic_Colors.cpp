#include <iostream>

char getFinalColors(std::string colors)
{
    int red = 0, green = 0, blue = 0;

    for (char color : colors)
    {
        if (color == 'R')
        {
            red++;
        }
        else if (color == 'G' && red > 0)
        {
            red--;
            green++;
        }
        else if (color == 'B' && green > 0)
        {
            green--;
            blue++;
        }
        else
        {
            blue++;
        }
    }

    if (red % 2 == 0 && green % 2 == 0 && blue % 2 == 0)
    {
        return 'Y'; // All colors vanish
    }
    else if (red % 2 == 1 && green % 2 == 0 && blue % 2 == 0)
    {
        return 'R'; // Only red remains
    }
    else if (red % 2 == 0 && green % 2 == 1 && blue % 2 == 0)
    {
        return 'G'; // Only green remains
    }
    else if (red % 2 == 0 && green % 2 == 0 && blue % 2 == 1)
    {
        return 'B'; // Only blue remains
    }
    else
    {
        return 'C'; // Some colors remain
    }
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::string colors;
        std::cin >> colors;

        char finalColor = getFinalColors(colors);
        std::cout << finalColor << std::endl;
    }

    return 0;
}
