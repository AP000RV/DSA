#include<iostream>
using namespace std;

int main(){

    int n, count=0;
    cout << " Enter n: ";
    cin >> n;
    cout << endl;



/*
    ----p1----

    * * *
    * * *
    * * *

 */

// for(int i=0; i<3; i++){
//     for(int j=0;j<3;j++){
//         cout << " *"; 
//     }
//     cout << endl;
// }


/*
    p2 
    1 1 1
    2 2 2
    3 3 3
*/

// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cout << i+1 << " ";
//     }
//     cout << endl;
// }

/*
    p3
    1 2 3 4 
    1 2 3 4 
    1 2 3 4
    1 2 3 4
*/

// for(int i=0; i<4; i++){
//     for(int j=0; j<4; j++){
//         cout << j+1 << " ";
//     }
//     cout << endl;
// }

/*
    p4
    1 2 3 
    4 5 6 
    7 8 9
*/

// int count = 0;
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         count++;
//         cout << count << " ";
//     }
//     cout << endl;
// }

/*
    p5
    *
    **
    ***
    ****
*/

// for(int i=1; i<=n; i++){
//     for(int j=0; j<i; j++){
//         cout << "*";
//     }
//     cout << endl;
// }

/*
    p6
    1
    2 2
    3 3 3 
    4 4 4 4
*/

// for(int i=0; i<=n; i++){
//     for(int j=0; j<i; j++){
//         cout << i << " ";
//     }
//     cout << endl;
// }

/*
    p7
    1
    2 3
    4 5 6  
    7 8 9 10
*/

// for(int i=0; i<=n; i++){
//     for(int j=0; j<i; j++){
//         count++;
//         cout << count << " ";
//     }
//     cout << endl;
// }

/*
    p8
    1
    2 1 
    3 2 1
    4 3 2 1
*/

// for(int i=0; i<=n; i++){
//     for(int j=0; j<i; j++){
//         cout << i-j << " ";
//     }
//     cout << endl;
// }

/*
    p9
    A A A
    B B B
    C C C
*/

// char temp = 'A';
// for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         cout << temp << " "; 
//     }
//     cout << endl;
//     temp++;
// }

/*
    p10
    A B C
    A B C
    A B C
*/

// for(int i=0; i<n; i++){
//     char temp = 'A';
//     for(int j=0; j<n; j++){
//         cout << temp << " ";
//         temp++;
//     }
//     cout << endl;
// }

/*
    p11
    A B C
    D E F
    G H I
*/

// char temp ='A';
// for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         cout << temp << " ";
//         temp++;
//     }
//     cout << endl;
// }

/*
    p12
    A B C
    B C D
    C D E
*/

// char temp = 'A';
// for(int i=0; i<n; i++){
//     char temp2 = temp;
//     for(int j=0; j<n; j++){
//         cout << temp2 << " ";
//         temp2++;
//     }
//     temp++;
//     cout << endl;
// }

/*
    p13
    A
    B B
    C C C
*/

// char temp = 'A';
// for(int i=1; i<=n; i++){
//     for(int j=0; j<i; j++){
//         cout << temp << " ";
//     }
//     cout << endl;
//     temp++;
// }

/*
    p14

    A
    B C 
    D E F
    G H I J
*/

// char temp = 'A';
// for(int i=1; i<=n; i++){
//     for(int j=0; j<i; j++){
//         cout << temp << " ";
//         temp++;
//     }
//     cout << endl;
// }

/*
    p15
    A
    B C 
    C D E
    D E F G
*/

// char temp = 'A';
// for(int i=1; i<=n; i++){
//     char temp2 = temp;
//     for(int j=0; j<i; j++){
//         cout << temp2 << " ";
//         temp2++;    
//     }
//     cout << endl;
//     temp++;
// }

/*
    p16
    D
    C D 
    B C D
    A B C D
*/

// char temp = 'D';
// for(int i=1; i<=n; i++){
//     char temp2 = temp;
//     for(int j=0; j<i; j++){
//         cout << temp2 << " ";
//         temp2++;
//     }
//     cout << endl;
//     temp--;
// }

/*
    p17

          *
        * * 
      * * *
    * * * *
*/

    // for(int i=1; i<=n; i++){
    //     int space = n-i;
    //     for(int j=1; j<=n; j++){
    //         if(j<=space)
    //         cout << "   ";
    //         else
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }


/*
    p18
    * * * *
    * * *
    * * 
    *
*/

// for(int i=0; i<n; i++){
//     int temp = n-i;
//     for(int j=0; j<temp; j++){
//         cout << "*" << " ";
//     }
//     cout << endl;
// }

/*
    p19
    1 1 1 1
      2 2 2
        3 3
          4
*/

// for(int i=1; i<=n; i++){
//     for(int j=0; j<=n; j++){
//         if(j<i) cout << " ";
//         else cout << i ;
//     }
//     cout << endl;
// }


/*
    p20
          1
        2 2
      3 3 3
    4 4 4 4
*/

// for(int i=1; i<=n; i++){
//     int spaces = n-i;
//     for(int j=0; j<n; j++){
//         if(j<spaces) cout << "   ";
//         else cout << " "<<  i << " ";
//     }
//     cout << endl;
// }



/*
    p21
    1 2 3 4
      2 3 4
        3 4
          4
*/

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if(j<i) cout << " ";
//         else cout << j;
//     }
//     cout << endl;
// }


/*
    p23
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1   
*/

// for(int i=1; i<=n; i++){
//     int space = n-i;
//     for(int j=1; j<=space; j++){
//         cout << "  ";
//     }
//     for(int k=1; k<=i; k++){
//         cout << k << " ";
//     }
//     int start = i-1;
//     for(int m=start; m>0; m--){
//         cout << m << " ";
//     }
//     cout << endl;
// }

/*
p24

    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
    
*/



/*
p25

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

n=5;
*/

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         if((i+j)%2 == 0){
//             cout << "0 ";
//         }
//         else{
//             cout << "1 ";
//         }
//     }
//     cout << endl;
// }


/*
p26

    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *  

n=5
*/

// for(int row=1; row<=n; row++){
//     for(int space=1; space<=n-row; space++){
//         cout << "  ";
//     }
//     for(int col=1; col<=n; col++){
//         cout << "* ";
//     }
//     cout << endl;
// }


// p27

//     *       *
//   *   *   *   *
// *       *       *

// n =9; (no of stars)

// for(int i=1; i<=3; i++){
//     for(int j=1; j<=n; j++){
//         if((i+j)%4==0 || (i==2 && j%4==0)){
//             cout << "* ";
//         }
//         else{
//             cout << "  ";
//         }
//     }
//     cout << endl;
// }


}