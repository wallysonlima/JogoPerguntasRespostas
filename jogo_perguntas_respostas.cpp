// jogo_perguntas_respostas
/*
   PROGRAMA........: JOGO DE PERGUNTAS E RESPOSTAS
   CRIADO EM.......: 09/02/2011
   TERMINADO EM....: 10/02/2011
   ATUALIZADO EM...: 10/02/2011
   AUTOR...........: WALLYSON NUNES
   E-MAIL..........: linho_msn_@hotmail.com
   DESCRIÇÃO.......: JOGO DE PERGUNTAS E RESPOSTA ONDE O USUÁRIO
					 ESCOLHE EM QUE NÍVEL QUER JOGAR E ENTÃO RESPONDE
					 AS PERGUNTAS, E LOGO AO ACABAR ELE VÊ QUANTAS PERGUNTAS
					 ELE ACERTOU.
  BASEADO NO PROGRAMA DE : THIAGO CESAR SERRILHO
  LINK DO PROGRAMA: http://www.scriptbrasil.com.br/download/codigo/7066/
  EMAIL: webserrilho@hotmail.com / webserrilho@gmail.com                   
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

void facil ();
void medio ();
void dificil ();

	string tecla,resposta[31],resposta2[31],resposta3[31],pergunta[11],pergunta2[11],pergunta3[11];
	int resp,certo,errado;
int main (void){
	
	 string nome;
	  int nivel;
	
	cout << "    XXXXX   _XXXXX_   XXXX     _XXXXX_       XXXX__    XXXXXXX              \n";
    cout << "       XX   XX   XX   XX       XX   XX       XX   X_   XX                   \n";
    cout << "       XX   XX   XX   XX       XX   XX       XX    X   XX_____              \n";
    cout << "       XX   XX   XX   XX  __   XX   XX       XX    X   XXXXXXX              \n";
    cout << "   _   XX   XX   XX   XX  XX   XX   XX       XX   _X   XX                   \n";
    cout << "   X___XX   XX___XX   XX___X   XX___XX       XX___X    XX_____              \n";
    cout << "    XXXX     XXXXX     XXXX     XXXXX        XXXXX     XXXXXXX              \n";
    cout << "   _____   _____   _____    ___    _   _   ____    _____    ___    ____     \n";    
    cout << "   XXXXX   XXXXX   XXXXX   _XXX    X   X   XXXX_   XXXXX   _XXX_   XXXX     \n";
    cout << "   X   X   X       X   X   X       X   X   X   X     X     X   X   X        \n";
    cout << "   X___X   X____   X___X   X  __   X   X   X   X     X     X___X   X___  _  \n";
    cout << "   XXXXX   XXXXX   XXXX_   X  XX   X   X   X   X     X     XXXXX   XXXX  E  \n";
    cout << "   X       X____   X   X_  X___X   X___X   X   X     X     X   X   ___X     \n";
    cout << "   X       XXXXX   X    X   XXX     XXX    X   X     X     X   X   XXXX     \n";
	cout << "   _____   _____   ____   _____    ____    ____   _____    ___    ____      \n";
	cout << "   XXXXX   XXXXX   XXXX   XXXXX   _XXXX_   XXXX   XXXXX   _XXX_   XXXX      \n";
    cout << "   X   X   X       X      X   X   X    X   X        X     X   X   X         \n";
    cout << "   X___X   X____   X___   X___X   X    X   X___     X     X___X   X___      \n";
    cout << "   XXXX_   XXXXX   XXXX   XXXXX   X    X   XXXX     X     XXXXX   XXXX      \n";
    cout << "   X   X_  X____   ___X   X       X____X   ___X     X     X   X   ___X      \n";
    cout << "   X    X  XXXXX   XXXX   X        XXXX    XXXX     X     X   X   XXXX      \n\n";
	cout << "             Digite um letra e aperte enter para continuar ! \n";
	 cin >> tecla;
	
     cout << "\nDigite o nome do jogador: ";
      cin >> nome;
     cout << "\n ===============================================================\n";
	 cout << "                       O jogo começa agora ! \n ";
     cout << "===============================================================\n";
     cout << "                 *=============================*\n";
	 cout << "                 |    NIVEIS DE DIFICULDADE    |\n";
	 cout << "                 *=============================*\n";
	 cout << "                 |    1 - NIVEL FÁCIL          |\n";
	 cout << "                 |    2 - NIVEL MÉDIO          |\n";
	 cout << "                 |    3 - NIVEL DIFÍCIL        |\n";
	 cout << "                 *=============================*\n";
	 cout << "                 Digite o nível em que quer jogar ?\n";
      
      errado: // volta aqui, caso o usuario digite uma opcao inválida
     cin >> nivel;
     
     if (nivel<1 || nivel>3){
     cout << "opção inválida, digite novamente !\n";
	 goto errado;
	 }	
     
     switch (nivel){
		 case 1: facil ();   break;
		 case 2: medio (); 	 break;
		 case 3: dificil (); break;
     }     
     
	cout << "----------------------------------------------------------------------------\n";
	cout << "Nome: " << nome << endl;
	cout << "Respostas certas  : " << certo << endl;
	cout << "Respostas erradas : " << errado << endl;
	cout << "----------------------------------------------------------------------------\n";
     
    return 0;
     
 }

// nivel facil
void facil(){
	
	cout << "*==========================================================================*\n";
	cout << "|  ___   ___ ___ ___    ___ _________ ___                                  |\n";
	cout << "|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX                                  |\n";
	cout << "|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX                                  |\n";
	cout << "|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX                                  |\n";
	cout << "|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX                                  |\n";
	cout << "|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______                            |\n";
	cout << "|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX                            |\n";
	cout << "|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX                            |\n";
	cout << "|                            _________ _________ _________ ___ ___         |\n";
	cout << "|                            XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX         |\n";
	cout << "|                            XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX         |\n";
	cout << "|                            XXX___    XXX___XXX XXX       XXX XXX         |\n";
	cout << "|                            XXXXXX    XXXXXXXXX XXX       XXX XXX         |\n";
	cout << "|                            XXXXXX    XXXXXXXXX XXX______ XXX XXX______   |\n";
	cout << "|                            XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX   |\n";
	cout << "|                            XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX   |\n";
	cout << "|                                                                          |\n";
	cout << "*==========================================================================*\n\n";
	cout << "              Presione uma letra e digite enter par continuar ! \n";
	 cin >> tecla;
	 
	certo = 0, errado = 0;
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 1 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Quem é o fundador da Microsoft ? \n\n";
	cout << "1) Linus Torvalds \n";
	cout << "2) Bill Gates \n";
	cout << "3) Steve Jobs \n"; 
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 2 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual componente do pc é responsável por fornecer energia para a placa-mãe ? \n\n";
	cout << "1) Fonte de alimentação \n";
	cout << "2) Processador \n";
	cout << "3) Gabinete \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 3 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual o sistema operacional mais utilizado no mundo ? \n\n";
	cout << "1) Mac OS X 10.5 \n";
	cout << "2) Windows Vista \n";
	cout << "3) Windows XP \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}

	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 4 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Quem é o desenvolvedor do Linux ? \n\n";
	cout << "1) Paul Allen \n";
	cout << "2) Bjarne Stroustrup \n";
	cout << "3) Linus Torvalds \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 5 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é a distribuição mais famosa derivada do Debian ? \n\n";
	cout << "1) Red hat \n";
	cout << "2) Ubuntu \n";
	cout << "3) Slackware \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 6 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Que livro inspirou o famoso comercial do macintosh em 1984 ? \n\n";
	cout << "1) Admirável mundo novo \n";
	cout << "2) O grande irmão \n";
	cout << "3) 1984 \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 7 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é a rede social mais utilizada no Brasil ? \n\n";
	cout << "1) Orkut \n";
	cout << "2) Facebook \n";
	cout << "3) MySpace \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 8 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é o navegador padrão do windows ? \n\n";
	cout << "1) Internet Explorer \n";
	cout << "2) Mozilla Firefox \n";
	cout << "3) Google Chrome \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 9 - Nivel Fácil      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "O que significa a sigla PC ? \n\n";
	cout << "1) Primeiro Computador \n";
	cout << "2) Computador Pessoal (Personal Computer) \n";
	cout << "3) Processador Compacto \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 10 - Nivel Fácil     |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é o símbolo da apple ? \n\n";
	cout << "1) Maçã \n";
	cout << "2) Pera \n";
	cout << "3) Morango \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo +=1 ; break;
		default: errado += 1; break;
	}

	cout << "                     *--------------------------------*\n";
	cout << "                     |  Resultado - Nivel Fácil       |\n";
	cout << "                     *--------------------------------*\n\n";
}
	

//nivel medio
void medio (){

	cout << "*==========================================================================*\n";
	cout << "|  ___   ___  ___  ___    ___  _________  ___                              |\n";
	cout << "|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                              |\n";
	cout << "|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                              |\n";
	cout << "|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                        |\n";
	cout << "|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|                     ___     ___  _________  ________   ___  _________    |\n";
	cout << "|                     XXX_   _XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX    |\n";
	cout << "|                     XXXX_ _XXXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX    |\n";
	cout << "|                     XXXXX_XXXXX  XXX____    XXX   XXX  XXX  XXX   XXX    |\n";
	cout << "|                     XXX XXX XXX  XXXXXXX    XXX    XX  XXX  XXX   XXX    |\n";
	cout << "|                     XXX  X  XXX  XXX______  XXX___XXX  XXX  XXX___XXX    |\n";
	cout << "|                     XXX     XXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX    |\n";
	cout << "|                     XXX     XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX    |\n";
	cout << "|                                                                          |\n";
	cout << "*==========================================================================*\n\n";
	cout << "              Presione uma letra e digite enter par continuar ! \n";
	 cin >> tecla;
	
	errado = 0, certo = 0;

	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 1 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Quais são as distribuições linux raízes ? \n\n";
	cout << "1) Ubuntu, mandriva e Slackware \n";
	cout << "2) Debian, RedHat e Mandriva \n"; 
	cout << "3) Debian, RedHat e Slackware \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 2 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual o comando é usado no executar para acessar o registro do windows ? \n\n";
	cout << "1) msconfig \n";
	cout << "2) regedit \n";
	cout << "3) gpedit \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 3 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é o nome do criador da linguagem C++ \n\n";
	cout << "1) Steve Wozniak \n";
	cout << "2) Linus Torvalds \n";
	cout << "3) Bjarne Stroustrup \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo +=1 ; break;
		default: errado += 1; break;
	}

	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 4 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual destas são interfaces gráficas do linux ? \n\n";
	cout << "1) nautilus e konqueror \n";
	cout << "2) konqueror e evolution \n";
	cout << "3) Gnome e KDE \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 5 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "O que é grub ? \n\n";
	cout << "1) Gerenciador de inicialização do linux \n";
	cout << "2) Gerenciador de arquivos do linux \n";
	cout << "3) Gerenciador de conexão do linux \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 6 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual o comando é usado no executar para acessar o gerenciador de permissões no windows ? \n\n";
	cout << "1) gepedit \n";
	cout << "2) gpedit.msc \n";
	cout << "3) geperdit \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 7 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é a distribuição linux baseada em simplicidade e estabilidade ? \n\n";
	cout << "1) Slackware \n";
	cout << "2) Mandriva \n";
	cout << "3) RedHat \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 8 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Para que serve o comando chmod ? \n\n";
	cout << "1) Gerenciar os repositórios no linux \n";
	cout << "2) Gerenciar as permissões no linux \n";
	cout << "3) Gerenciar os arquivos de inicialização \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 9 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual dessas versões do windows não deram certo ? \n\n";
	cout << "1) Windows Vista e Windows 2008 server \n";
	cout << "2) Windows Vista e Windows Millenium \n"; 
	cout << "3) Windows 2000 e Windows 2003 server \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo +=1 ; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 10 - Nivel Médio      |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Para que serve o SSH ? \n\n";
	cout << "1) Gerenciar arquivos \n";
	cout << "2) Gerenciar internet \n";
	cout << "3) Acesso remoto \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Resultado - Nivel Médio       |\n";
	cout << "                     *--------------------------------*\n\n";
}

//nivel dificil
void dificil (){
	
	cout << "*==========================================================================*\n";
	cout << "|  ___   ___  ___  ___    ___  _________  ___                              |\n";
	cout << "|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                              |\n";
	cout << "|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                              |\n";
	cout << "|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                        |\n";
	cout << "|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|               ________   ___  _________  ___  _________  ___  ___        |\n";
	cout << "|               XXXXXXXX   XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n";
	cout << "|               XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n";
	cout << "|               XXX   XXX  XXX  XXX___     XXX  XXX        XXX  XXX        |\n";
	cout << "|               XXX    XX  XXX  XXXXXX     XXX  XXX        XXX  XXX        |\n";
	cout << "|               XXX___XXX  XXX  XXXXXX     XXX  XXX______  XXX  XXX______  |\n";
	cout << "|               XXXXXXXXX  XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n";
	cout << "|               XXXXXXXX   XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n";
	cout << "|                                                                          |\n";
	cout << "*==========================================================================*\n\n";
	cout << "              Presione uma letra e digite enter par continuar ! \n";
	 cin >> tecla;
	 
	errado = 0, certo = 0;

	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 1 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual o nome do criador da linguagem C ? \n\n";
	cout << "1) Bjarne Stroustrup \n"; 
	cout << "2) Rasmus Lerdorf \n";
	cout << "3) Dennis Ritchie \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 2 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual era o nome do código do windows xp ? \n\n";
	cout << "1) Whistler \n";
	cout << "2) Longhorn \n";
	cout << "3) Memphis \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 3 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "No chmod o que significa A ? \n\n";
	cout << "1) Outros \n";
	cout << "2) Usuários \n";
	cout << "3) Todos \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}

	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 4 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é a porta padrão do SSH ? \n\n";
	cout << "1) 80 \n";
	cout << "2) 22 \n";
	cout << "3) 8080 \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 5 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual o SOFTWARE desenvolvido para supervisionar todas as atividades de um microcomputador? \n\n";
	cout << "1) Driver \n";
	cout << "2) Sistema Operacional \n";
	cout << "3) Compilador \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 6 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "O que é http ? \n\n";
	cout << "1) Hyper Trans Protocol \n";
	cout << "2) Hyper Text Transfer \n";
	cout << "3) Hyper Text Transfer Protocol \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 7 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "As permissões do linux são divididas em três níves, quais são eles ? \n\n";
	cout << "1) Dono, Grupo e Outros \n";
	cout << "2) Dono, Usuários e Grupos \n";
	cout << "3) Usuários, Grupos e Outros \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 8 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "O que é GPL ? \n\n";
	cout << "1) License Geral Public \n";
	cout << "2) Geral Pública Licença \n"; 
	cout << "3) General Public License \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 3: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 9 - Nivel Difícil    |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "O que é Kernel? \n\n";
	cout << "1) É o nucleo do sistema operacional \n"; 
	cout << "2) É um sistema de segurança do Linux \n";
	cout << "3) É um programa para formatação de discos \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 1: certo += 1; break;
		default: errado += 1; break;
	}
	
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Pergunta 10 - Nivel Difícil   |\n";
	cout << "                     *--------------------------------*\n\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual é o comando para logar no SSH ? \n\n";
	cout << "1) ssh password@ip \n";
	cout << "2) ssh login@ip \n";
	cout << "3) ssh login@password \n";
	cout << "----------------------------------------------------------------------------\n";
	cout << "Qual a resposta certa?\n";
	 cin >> resp;
	
	switch (resp){
		case 2: certo += 1; break;
		default: errado += 1; break;
	}
	cout << "                     *--------------------------------*\n";
	cout << "                     |  Resultado - Nivel Difícil     |\n";
	cout << "                     *--------------------------------*\n\n";
}
