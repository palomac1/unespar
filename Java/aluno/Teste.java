package aluno;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Teste {

	public static void main(String[] args) throws IOException {
		
		Curso cursos[] = new Curso[2];
		cursos[0] = new Curso();
		cursos[0].nome = "Ciência da computação";
		cursos[1] = new Curso();
		cursos[1].nome = "Adm";
		
		File file = new File("/root/eclipse-workspace/File/src/aluno/alunos.txt");
		if(file.exists() == false) {
			file.createNewFile();
		}
		
		FileWriter fw = new FileWriter(file, true);
		BufferedWriter bw = new BufferedWriter(fw);
		
		FileReader fr = new FileReader(file);
		BufferedReader br = new BufferedReader(fr);
		
		Scanner s = new Scanner(System.in);
		
		lb_loop:
		while(true) {
			System.out.println("O que deseja fazer?");
			System.out.println("1 - Cadastrar novo aluno");
			System.out.println("2 - Listar alunos");
			System.out.println("3 - Atualizar dados do aluno");
			System.out.println("4 - Excluir aluno");
			System.out.println("9 - Sair");
			int opt = Integer.parseInt(s.nextLine());
			switch(opt) {
				case 1:
					Aluno aluno_create = new Aluno();
					System.out.println("Informe o nome do aluno:");
					aluno_create.nome = s.nextLine();
					System.out.println("Informe a idade do aluno:");
					aluno_create.idade = Integer.parseInt(s.nextLine());
					System.out.println("Selecione o curso:");
					for(int i=0; i<cursos.length; i++) {
						System.out.printf("%d - %s\n", i+1, cursos[i].nome);
					}
					int id_curso = -1;
					boolean flag_curso = false;
					do {
						if(flag_curso == true) {
							System.out.println("Selecione um curso válido.");
							for(int i=0; i<cursos.length; i++) {
								System.out.printf("%d - %s\n", i+1, cursos[i].nome);
							}
						}
						id_curso = Integer.parseInt(s.nextLine());
						flag_curso = true;
					} while(id_curso <= 0 || id_curso > cursos.length);
					aluno_create.curso = cursos[id_curso-1];
					bw.append(aluno_create.getReg());
					bw.newLine();
					bw.flush();
					System.out.println("Aluno criado com sucesso.");
					break;
				case 2:
					while(br.ready()) {
						System.out.println(br.readLine());
					}
					br.close();
					fr.close();
					fr = new FileReader(file);
					br = new BufferedReader(fr);
					break;
				case 9:
					System.out.println("opt 9");
					break lb_loop;
				default:
					System.out.println("Opção inválida.");
					break;
			}
		}
		
		bw.close();
		fw.close();
		br.close();
		fr.close();
		
	}
	
}