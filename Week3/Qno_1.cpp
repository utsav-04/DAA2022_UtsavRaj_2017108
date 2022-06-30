#include<iostream>
using namespace std;
void display(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
    cout << arr[i] << "\t"; 
    cout << "\n"; 
} 
int main() 
{ 
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int array[n];           
    cout << "Enter elements:" << endl;
    for(int i = 0; i<n; i++) {
      cin >> array[i];
    }

    cout << "Before Insertion sort: \n";
    display(array, n);

    int i, key, j , comp=0,shift=0;  
    for (i = 1; i < n; i++) { 
        key = array[i]; 
        j = i - 1; 
        comp++;
        
        while (j >= 0 && array[j] > key) 
        {  
            comp++;
            array[j + 1] = array[j];  
            j = j - 1;
            shift++;
        }
        
        array[j + 1] = key;  
    }
    cout<<"No of Comparision"<<comp<<endl;
    cout<<"No of Shift"<<shift<<endl;
    cout << "After Insertion sort: \n"; 
    display(array, n);
    
    return 0; 
}
