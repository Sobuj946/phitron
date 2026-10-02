import java.util.Scanner;

public class Project {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the varsity name:");
        String name=input.nextLine();
       String s=name.toLowerCase();
        System.out.println("Lower case:"+s);
        String u=name.toUpperCase();
        System.out.println("Upper case:"+u);
        int vowel=0;
        int total=0;
        for(int i=0;i<name.length();i++)
        {
            if(name.charAt(i)=='A'||name.charAt(i)=='E'||name.charAt(i)=='I'||name.charAt(i)=='O'||name.charAt(i)=='U'||name.charAt(i)=='a'||name.charAt(i)=='e'||name.charAt(i)=='i'||name.charAt(i)=='o'||name.charAt(i)=='u')
            {
                vowel++;
            }
            
        }
        System.out.println("vowel"+vowel);
        System.out.println("Total charater:"+name.length());
     
    }
}
