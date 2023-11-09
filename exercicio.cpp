#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Aluno {
    int matricula;
    string nome;
    string email;
};

void inserir_dados(vector<Aluno>& alunos, int matricula, const string& nome, const string& email) {
    Aluno aluno = {matricula, nome, email};
    alunos.push_back(aluno);
}

void exibir_dados(const vector<Aluno>& alunos) {
    for (const auto& aluno : alunos) {
        cout << "Matrícula: " << aluno.matricula << endl;
        cout << "Nome: " << aluno.nome << endl;
        cout << "Email: " << aluno.email << endl;
        cout << "------------------------------" << endl;
    }
}

int main() {
    vector<Aluno> alunos;

    // Exemplo de uso dos métodos
    inserir_dados(alunos, 1, "João", "joao@example.com");
    inserir_dados(alunos, 2, "Maria", "maria@example.com");
    inserir_dados(alunos, 3, "Carlos", "carlos@example.com");

    cout << "Dados dos alunos:" << endl;
    exibir_dados(alunos);

    return 0;
}