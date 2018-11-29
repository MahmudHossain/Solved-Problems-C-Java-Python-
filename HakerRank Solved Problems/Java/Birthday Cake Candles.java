import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int max = 0,count=0;
        int height[] = new int[n];
        for(int i=0; i < n; i++){
            height[i] = sc.nextInt();
            if(height[i]>max)
                max = height[i];
        }
         for(int i=0; i < n; i++){
           
            if(height[i]==max)
                count++;
        }
        System.out.println(count);
    }
}
