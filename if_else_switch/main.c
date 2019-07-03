#include <stdio.h>
#include <stdbool.h>

bool openFile()
{
    return true;
}

bool isAvailableDiskMemory()
{
    return true;
}

int main()
{

    bool isOk = false;

    //isOk = openFile();

    //if (openFile() && isAvailableDiskMemory()) //1 case
    if (!openFile()) //2 case
    {

    }
    else {

        if (!isAvailableDiskMemory())
        {

        }

        else {

        }
        return 0;

    }

}
