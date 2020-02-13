
    int i ,j,temp;

    for(i=0;i<lenghtOfArray;i++)
    {

        for(j=0;j<i-lenghtOfArray-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

 for (int i=0;i<lenghtOfArray;i++)
 {
     cout<<arr[i]<<"\t";
 }
