import java.util.Scanner;

public class Hello {
        public static void main(String args[]){
                Scanner s = new Scanner(System.in);
                int a = s.nextInt();
                int arr[] = new int[a];
                for(int i = 0; i < a; i++){
                        System.out.println(arr[i]);
                }
        }
}
