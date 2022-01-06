#include <iostream>

int n = 0;
char arr[100][100];
/*void numw()
{

}*/

void read()
{
    std::cout << "Enter the number of words to be entered: ";
    std::cin >> n;
    std::string s;
    //int no = 0;
    for(int i = 0; i < n; i++)
    {
        std::cout << "Enter the word: ";
        std::cin >> s;
        for(int j = 0; j < sizeof(s); j++)
            {
                arr[i][j] = s[j];
            }
    }
    /*for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(arr[i][j] == '\0')
                break;
            std::cout << arr[i][j];

        }
        if(i == n-1)
            break;
        std::cout << "\n";
    }*/

}

void rows()
{
    int c = 0;
    for(int l = 0; l < n; l++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            int l1, l2 = 0;
            for(int j = 0; j < 100; j++)
            {
                if(arr[i][j] != '\0')
                    l1++;
                if(arr[i+1][j] != '\0')
                    l2++;
                if(arr[i][j] == '\0' && arr[i+1][j] == '\0')
                    break;
            }
            if(l1 > l2)
            {
                for(int k = 0; k < 100; k++)
                {
                    if(arr[i][k] == '\0' && arr[i+1][k] == '\0')
                        break;
                    //else if(arr[i][k] == '\0' && arr[i+1][k] != '\0')
                    //{
                     //   arr[i][k] == arr[i+1][k];
                     //   arr[i+1][k] == '\0';
                    //}
                    else if(arr[i][k] != '\0' && arr[i+1][k] == '\0')
                    {
                        arr[i+1][k] = arr[i][k];
                        arr[i][k] = '\0';
                    }
                    else
                       std::swap(arr[i][k], arr[i+1][k]);
                }
            }
            c++;
        }
    }
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(arr[i][j] == '\0')
                break;
            std::cout << arr[i][j];

        }
        if(i == n-1)
            break;
        std::cout << "\n";
    }
    std::cout << "\n";
}

void sorta()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            for(int k = 0; k < 100 - j - 1; k++)
            {
                if(arr[i][k+1] == '\0')
                    break;
                if(arr[i][k] > arr[i][k+1])
                std::swap(arr[i][k], arr[i][k+1]);
            }

        }
    }
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(arr[i][j] == '\0')
                break;
            std::cout << arr[i][j];

        }
        if(i == n-1)
            break;
        std::cout << "\n";
    }
}

int main()
{
    //numw();
    read();
    std::cout << "\n";
    rows();
    std::cout << "\n";
    sorta();
}
