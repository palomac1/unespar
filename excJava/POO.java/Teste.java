import java.util.Scanner;

public class Teste{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        Aluno aluno1 = new Aluno();
        System.out.println("Informe o nome do aluno: ");
        aluno1.nome = s.nextLine();

        System.out.println("Informe a idade do aluno: ");
        aluno1.idade = s.nextLine();

        System.out.println("Informe o curso do aluno: ");
        aluno1.curso = s.nextLine();

        System.out.println(aluno1.nome);
        System.out.println(aluno1.idade);
        System.out.println(aluno1.curso);
        aluno1.estudar();
    }
}
    