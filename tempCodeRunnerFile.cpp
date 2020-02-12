
    int bsearch(int v[], int lengthofArray, int search)
    {
        int left, right, mid;
        left = 0;
        right = lenghtOfArray - 1;
        while (left <= right)
        {

            mid = (left + right) / 2;

            if (values[mid] < search)
            {
                left = mid + 1;
            }
            else if (values[mid] > search)
            {
                right = mid - 1;
            }
            else
            {
                cout << mid << endl;
            }
        }

        return -1;
    }