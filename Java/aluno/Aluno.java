package aluno;

public class Aluno {

	String nome;
	int idade;
	Curso curso;
	
	String getReg() {
		return this.nome + ";" + this.idade + ";" + this.curso.nome;
	}
	
}