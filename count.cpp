//C++ program to count count number of consecutive inputs
#include <iostream>

int main()
{
    //declare variables to contain current values and same value entered after first one
    int cur_val = 0, val = 0;
    //read first value entered
    if (std::cin >> cur_val)
    {
        int cnt = 1;            //stores the count for the first value(cur_val) which we're processing
        while (std::cin >> val) //reads the remaining numbers
        {
            if (val == cur_val) //if values are the same
                ++cnt;          // add 1 to cnt
            else                //otherwise print cnt for previous value
            {
                std::cout << cur_val << " appeared " << cnt << " times " << std::endl;
                cur_val = val; //remember the new value
                cnt = 1;       //reset counter
            }
        } //while loop ends here
        //remember to print count for last value in the file
        std::cout << cur_val << " appeared " << cnt << " times " << std::endl;
    }
    return 0;
}