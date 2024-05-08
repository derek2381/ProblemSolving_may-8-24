// problem link
// https://codeforces.com/problemset/problem/1926/A


import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String str = sc.nextLine();
            int ca = 0, cb = 0;

            for(int i = 0;i  < str.length();i++){
                if(str.charAt(i) == 'A'){
                    ca++;
                }else{
                    cb++;
                }
            }

            if(ca > cb){
                System.out.println('A');
            }else{
                System.out.println('B');
            }

        }
    }
}
