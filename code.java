package code;
import java.util.Random;
import java.util.Scanner;

public class code {

	public static void main(String[] args) {
		
		Random rand = new Random();
		 int nombreAleatoire = rand.nextInt(101); // génère un nombre aléatoire entre 0 et 100
	     System.out.println(nombreAleatoire);//j'ai reservé cette ligne pour les test
	     System.out.println("entrez un nnombre :");
	     Scanner cl = new Scanner(System.in);
	     int nombre = cl.nextInt();
	     if(nombreAleatoire > nombre)
	     {
	    	 System.out.println("plus grand");
	     }
	     else if(nombreAleatoire < nombre ) {
	    	 System.out.println("plus petit");
	     }
	     else if(nombreAleatoire == nombre )
	     {
	    	 System.out.println("Bravo!");
	     }
	}

}
