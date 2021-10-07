#include<iostream>//header
using namespace std;//standad

int main()//execution of program begins from here
{
    int a,b;//declaring two numbers a and b
    cout<<"enter the two numbers"<<endl;//printing a line
    cin>>a>>b;//taling input from user
    int i,j;//declaring i and j outside the for loop because it will be used in outside of for loop also
    for(i=a;i<=b;i++)/*here we will use nested for loop because te inner loop will check that
    whether the number is a prime or not
    and the outer will run for all the numbers in between them*/
    {
        for(j=2;j<i;j++)/*here this loop is checking that whether the number which comes from
        the outer loop is prime or not */
        {
            if(i%j==0)//checking whether it is devisible or not 
            {
                break;//if it is devisible then skip the inner loop because that number will not prime
            }
        }
        if(j==i)/*this statement is checking that the number is completing the loop or skipping it */
        {
            cout<<i<<endl;//printing the prime number
        }
    }
    
    return 0;
}
