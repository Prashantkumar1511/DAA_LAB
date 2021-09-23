#include <iostream>

using namespace std;
int main()
{   int t;
    cin >> t;
    while (t--)
    {
        int  key, t,temp;
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cin >> key;
        int l = 0;
        int r = n - 1;
        temp = 0;
        int index;
        while (l <= r)
        {
            int mid = l + ((r - l) / 2);
            if (arr[mid] == key)
            {
                index = mid;
                temp = 1;
                break;
            }
            else if (arr[mid] > key)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (temp == 0)
        {
            cout << "Not Present";
        }
        else
        {
            int count = 1;
            int l_side = index - 1;
            while (l_side >= 0 && arr[l_side] == key)
            {
                count++;
                l_side--;
            }
            int r_side = index + 1;
            while (r_side < n && arr[r_side] == key)
            {
                count++;
                r_side++;
            }
           cout <<"Present"<< "  total copies : " << count << endl;
        }
    }
}