#include <iostream>
#include <cmath>

int timeToReachEndpoint(int totalLength, int climbDistance, int slideDistance)
{
    if (climbDistance >= totalLength)
    {
        return 1; // If the climb distance is greater than or equal to the total length, the monkey can reach in 1 minute.
    }

    int currentPosition = 0;
    int time = 0;

    while (currentPosition < totalLength)
    {
        time++;                           // Increment time for each minute.
        currentPosition += climbDistance; // Monkey climbs.

        if (currentPosition >= totalLength)
        {
            break; // Monkey reached or passed the endpoint.
        }

        currentPosition -= slideDistance; // Monkey slides down.
    }

    return time; // Return time taken to reach or pass the endpoint.
}

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int length, climb, slide;
        std::cin >> length >> climb >> slide;

        int time = timeToReachEndpoint(length, climb, slide);

        // Calculate the final position after time minutes considering climb and slide distance
        int finalPosition = time * climb - (time - 1) * slide;

        if (finalPosition >= length)
        {
            std::cout << time << std::endl;
        }
        else
        {
            std::cout << "Impossible" << std::endl;
        }
    }

    return 0;
}
