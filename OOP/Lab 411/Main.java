import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        Celula celula = new Celula("Celula");
        Nucleo nucleo = new Nucleo();
        CitoPlasma citoPlasma = new CitoPlasma();
        Membrana_Plastica membrana_Plastica = new Membrana_Plastica();
        Nucleolo nucleolo = new Nucleolo();
        ArrayList<Integer> ribosomas = new ArrayList<Integer>();
        ArrayList<Integer> adn = new ArrayList<Integer>();
        Celula_procariota celula_procariota = new Celula_procariota("Celula_procariota", 1);

        System.out.println("Celula: " + celula.getName());

    }
}
