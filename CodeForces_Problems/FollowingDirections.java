// problem link
// https://codeforces.com/problemset/problem/1791/B


import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            sc.nextLine();
            String str = sc.nextLine();
            int x = 0, y = 0;
            boolean hasPassed = false;
            for(int i = 0;i < n;i++){
                if(str.charAt(i) == 'U'){
                    y++;
                }else if(str.charAt(i) == 'R'){
                    x++;
                }else if(str.charAt(i) == 'L'){
                    x--;
                }else if(str.charAt(i) == 'D'){
                    y--;
                }

                if(x == 1 && y == 1){
                    hasPassed = true;
                    break;
                }
            }

            if(hasPassed){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
