#include <iostream>
using namespace std;
//1.)
// int main() {
//     int arr[100], n = 0, choice, pos, val, key, i, flag;

//     while (true) {
//         cout << "\n---- MENU ----\n";
//         cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter no. of elements: ";
//             cin >> n;
//             cout << "Enter the elements one by one:\n";
//             for (i = 0; i < n; i++) cin >> arr[i];
//             break;

//         case 2:
//             if (n == 0) cout << "Array is empty.\n";
//             else {
//                 cout << "Array elements: ";
//                 for (i = 0; i < n; i++) cout << arr[i] << " ";
//                 cout << "\n";
//             }
//             break;

//         case 3:
//             if (n == 100) cout << "Array is full.\n";
//             else {
//                 cout << "Enter position (1-" << n + 1 << "): ";
//                 cin >> pos;
//                 cout << "Enter value: ";
//                 cin >> val;
//                 for (i = n; i >= pos; i--) arr[i] = arr[i - 1];
//                 arr[pos - 1] = val;
//                 n++;
//             }
//             break;

//         case 4:
//             if (n == 0) cout << "Array is empty.\n";
//             else {
//                 cout << "Enter position (1-" << n << "): ";
//                 cin >> pos;
//                 for (i = pos - 1; i < n - 1; i++) arr[i] = arr[i + 1];
//                 n--;
//             }
//             break;

//         case 5:
//             if (n == 0) cout << "Array is empty.\n";
//             else {
//                 cout << "Enter value to search: ";
//                 cin >> key;
//                 flag = 0;
//                 for (i = 0; i < n; i++) {
//                     if (arr[i] == key) {
//                         cout << "Found at position " << i + 1 << "\n";
//                         flag = 1;
//                         break;
//                     }
//                 }
//                 if (flag == 0) cout << "Not found.\n";
//             }
//             break;

//         case 6:
//             cout << "Exited\n";
//             return 0;

//         default:
//             cout << "Invalid choice.\n";
//         }
//     }
// }
//2.)
// int main() {
//     int arr[100], n, i, j, k;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:\n";
//     for (i = 0; i < n; i++) {
//         cin >> arr[i];
//     }


//     for (i = 0; i < n; i++) {
//         for (j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
           
//                 for (k = j; k < n - 1; k++) {
//                     arr[k] = arr[k + 1];
//                 }
//                 n--;  
//                 j--;   
//             }
//         }
//     }

//     cout << "new unique array is:\n";
//     for (i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }
//3.) output is 10000
//4.)
//a)
// int main() {
//     int arr[100], n, i;

//     cout << "Enter size of array: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:\n";
//     for(i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int start = 0;
//     int end = n - 1;
//     while(start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }

//     cout << "Reversed array:\n";
//     for(i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
//b)

// int main() {
//     int a[10][10], b[10][10], c[10][10];
//     int i, j, k, m, n, p, q;

//     cin >> m >> n;
//     cin >> p >> q;

//     if(n != p) {
//         cout << "Not possible";
//         return 0;
//     }

//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             cin >> a[i][j];

//     for(i=0;i<p;i++)
//         for(j=0;j<q;j++)
//             cin >> b[i][j];

//     for(i=0;i<m;i++)
//         for(j=0;j<q;j++) {
//             c[i][j]=0;
//             for(k=0;k<n;k++)
//                 c[i][j]+=a[i][k]*b[k][j];
//         }

//     for(i=0;i<m;i++) {
//         for(j=0;j<q;j++)
//             cout << c[i][j] << " ";
//         cout << endl;
//     }
// }
//c)
// int main() {
//     int a[10][10], t[10][10];
//     int m,n,i,j;

//     cin >> m >> n;

//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             cin >> a[i][j];

//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             t[j][i]=a[i][j];

//     for(i=0;i<n;i++) {
//         for(j=0;j<m;j++)
//             cout << t[i][j] << " ";
//         cout << endl;
//     }
// }

//5.)
// int main() {
//     int a[10][10], m, n, i, j, s;

//     cout << "Enter rows and cols: ";
//     cin >> m >> n;

//     cout << "Enter elements:\n";
//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             cin >> a[i][j];

//     for(i=0;i<m;i++) {
//         s=0;
//         for(j=0;j<n;j++) s+=a[i][j];
//         cout << "Row " << i+1 << " sum = " << s << endl;
//     }

//     for(j=0;j<n;j++) {
//         s=0;
//         for(i=0;i<m;i++) s+=a[i][j];
//         cout << "Col " << j+1 << " sum = " << s << endl;
//     }
// }
//                                   ASSIGNMENT 2
//1.)
//  int main() {
//     int n, key;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter " << n << " sorted elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter element to search: ";
//     cin >> key;

//     int start = 0, end = n - 1, mid, result = -1;

//     while (start <= end) {
//         mid = (start + end) / 2;

//         if (arr[mid] == key) {
//             result = mid;
//             break;
//         }
//         else if (arr[mid] < key) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }

//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }
// 2.)
// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = 7;

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// 3.)
// int main() {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;

//     int arr[100];
//     cout<<"enter "<<n-1<<" elements (sorted): ";
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//     }

//     // linear method
//     int miss1=n;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]!=i+1){
//             miss1=i+1;
//             break;
//         }
//     }
//     cout<<"missing number (linear)="<<miss1<<endl;

//     // binary search method
//     int start=0,end=n-2,miss2=n;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==mid+1){
//             start=mid+1;
//         }
//         else{
//             miss2=mid+1;
//             end=mid-1;
//         }
//     }
//     cout<<"missing number (binary)="<<miss2<<endl;

//     return 0;
// }
// 4.)
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main() {
//    (a) Concatenate
//     char s1[100], s2[100];
//     cout<<"(a) enter first string: ";
//     cin>>s1;
//     cout<<"enter second string: ";
//     cin>>s2;

//     int i=0,j=0;
//     while(s1[i]!='\0') i++;
//     while(s2[j]!='\0'){
//         s1[i]=s2[j];
//         i++; j++;
//     }
//     s1[i]='\0';
//     cout<<"after concatenation: "<<s1<<endl;

// (b) Reverse
//     char str1[100];
//     cout<<"\n(b) enter string to reverse: ";
//     cin>>str1;
//     int n=strlen(str1);
//     cout<<"reverse: ";
//     for(int k=n-1;k>=0;k--){
//         cout<<str1[k];
//     }
//     cout<<endl;

//   (c) Delete vowels
//     char str2[100];
//     cout<<"\n(c) enter string to delete vowels: ";
//     cin>>str2;
//     int p=0,q=0;
//     while(str2[p]!='\0'){
//         char ch=str2[p];
//         if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&
//            ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'){
//             str2[q]=str2[p];
//             q++;
//         }
//         p++;
//     }
//     str2[q]='\0';
//     cout<<"after deleting vowels: "<<str2<<endl;

// (d) Sort strings
//     int num;
//     cout<<"\n(d) enter number of strings: ";
//     cin>>num;
//     char arr[10][100], temp[100];
//     cout<<"enter strings: ";
//     for(int k=0;k<num;k++){
//         cin>>arr[k];
//     }
//     for(int k=0;k<num-1;k++){
//         for(int m=k+1;m<num;m++){
//             if(strcmp(arr[k],arr[m])>0){
//                 strcpy(temp,arr[k]);
//                 strcpy(arr[k],arr[m]);
//                 strcpy(arr[m],temp);
//             }
//         }
//     }
//     cout<<"after sorting:\n";
//     for(int k=0;k<num;k++){
//         cout<<arr[k]<<endl;
//     }

//    (e) Uppercase to lowercase
//     char ch;
//     cout<<"\n(e) enter character (uppercase): ";
//     cin>>ch;
//     if(ch>='A' && ch<='Z'){
//         ch=ch+32;
//     }
//     cout<<"lowercase: "<<ch<<endl;

//     return 0;
// }
// 5) 
// int main() {
//     // (a) Diagonal Matrix
//     int n;
//     cout<<"(a) enter size of diagonal matrix: ";
//     cin>>n;
//     int diag[100];
//     cout<<"enter "<<n<<" diagonal elements: ";
//     for(int i=0;i<n;i++) cin>>diag[i];
//     cout<<"diagonal matrix:\n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j) cout<<diag[i]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (b) Tri-diagonal Matrix
//     cout<<"\n(b) enter size of tri-diagonal matrix: ";
//     cin>>n;
//     int tri[300];
//     cout<<"enter "<<3*n-2<<" elements (lower, diagonal, upper): ";
//     for(int i=0;i<3*n-2;i++) cin>>tri[i];
//     cout<<"tri-diagonal matrix:\n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j) cout<<tri[i]<<" ";
//             else if(i==j+1) cout<<tri[n+i-1]<<" ";
//             else if(i+1==j) cout<<tri[2*n+i-1]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (c) Lower Triangular Matrix
//     cout<<"\n(c) enter size of lower triangular matrix: ";
//     cin>>n;
//     int low[500];
//     cout<<"enter "<<n*(n+1)/2<<" elements row wise: ";
//     for(int i=0;i<n*(n+1)/2;i++) cin>>low[i];
//     cout<<"lower triangular matrix:\n";
//     int k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i>=j) cout<<low[k++]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (d) Upper Triangular Matrix
//     cout<<"\n(d) enter size of upper triangular matrix: ";
//     cin>>n;
//     int up[500];
//     cout<<"enter "<<n*(n+1)/2<<" elements row wise: ";
//     for(int i=0;i<n*(n+1)/2;i++) cin>>up[i];
//     cout<<"upper triangular matrix:\n";
//     k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i<=j) cout<<up[k++]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (e) Symmetric Matrix
//     cout<<"\n enter size of symmetric matrix: ";
//     cin>>n;
//     int sym[500];
//     cout<<"enter "<<n*(n+1)/2<<" elements (lower part): ";
//     for(int i=0;i<n*(n+1)/2;i++) cin>>sym[i];
//     cout<<"symmetric matrix:\n";
//     k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i>=j) cout<<sym[k++]<<" ";          // lower part
//             else cout<<sym[j*(j+1)/2+i]<<" ";      // mirror
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//7.)
// int main() {
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;

//     int a[100];
//     cout<<"enter elements: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int cnt=0;
//     cout<<"Inversions are: \n";
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 cout<<"("<<a[i]<<","<<a[j]<<") ";
//                 cnt++;
//             }
//         }
//     }

//     cout<<"\nTotal number of inversions = "<<cnt;
//     return 0;
// 8.)
// int main() {
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;

//     int a[100];
//     cout<<"enter elements: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int distinct=0;

//     for(int i=0;i<n;i++){
//         bool repeat=false;
//         for(int j=0;j<i;j++){
//             if(a[i]==a[j]){
//                 repeat=true;
//                 break;
//             }
//         }
//         if(!repeat){
//             distinct++;
//         }
//     }

//     cout<<"total distinct elements = "<<distinct;
//     return 0;
// }