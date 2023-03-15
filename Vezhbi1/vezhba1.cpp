// Kodot raboti za shell sorting, taka shto od edna niza se kreiraat drugi podnizi od elementite od taa niza, i vo podnizite se sortiraat po redosled.
// Podnizite se sobiraat vo edna niza, site elementi go proveruvaat svojot element od leva strana i se pravi proverka dali leviot element e pogolem, dokolku e elementite gi zamenuvaat mestata

#include  <iostream> 
using namespace std; 
   

int shellSort(int arr[], int N) 
{ 
    for (int gap = N/2; gap > 0; gap /= 2) 
       { 
    for (int i = gap; i < N; i += 1) 
       { 
           
int temp = arr[i]; 
 
int j; 
for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
arr[j] = arr[j - gap]; 
               
arr[j] = temp; 
        } 
    } 
    return 0; 
} 
   
int main() 
{ 
    int arr[] = {(int)'A', (int)'l', (int)'e', (int)'k', (int)'s', (int)'a', (int)'n', (int)'d', (int)'r', (int)'a', (int)' ', (int)'T', (int)'a', (int)'s', (int)'e', (int)'v', (int)'s', (int)'k', (int)'a', (int)' ', (int)'I', (int)'N', (int)'K', (int)'I', (int)'1', (int)'0', (int)'0', (int)'2'};
    int N = sizeof(arr)/sizeof(arr[0]); 
   
    cout << "Array to be sorted: \n"; 
    for (int i=0; i<N; i++) 
        cout << arr[i] << " "; 
   
    shellSort(arr, N); 
   
    cout << "\nArray after shell sort: \n"; 
    for (int i=0; i<N; i++) 
        cout << arr[i] << " "; 
   
    return 0; 
}