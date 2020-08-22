import java.io.*;

class CSVReadWrite{
    public static void main(String args[])throws IOException{
        String choice="y";
        int menuChoice;
        String date="";
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        while(choice.equals("y")|| choice.equals("Y")){
            System.out.println("MENU");
            System.out.println("1. Add data to a specific date");
            System.out.println("2. Display data / create file for any specific date");
            System.out.println("3. Open the csv file");
            System.out.println("Enter choice 1,2,3");
            menuChoice=Integer.parseInt(br.readLine());
            switch(menuChoice){
                case 1: System.out.println("What date? (in format DD/MM/YYYY)");
                        date=br.readLine();
                        break;
                case 2: System.out.println("Which date's data do you want? (in format DD/MM/YYYY)");
                        date=br.readLine();
                        break;
                case 3: System.out.println("Opening master data");
                        break;
                default: System.out.println("Invalid Choice");
            }
            System.out.println("Do you wish to continue?(y/n)");
            choice=br.readLine();
        }
    }
}