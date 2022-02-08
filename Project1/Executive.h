#ifndef Executive_H
#define Executive_H
#include <fstream>
#include <iostream>
using namespace std;

class Executive
{
  private:
    int m_rows = 10;
    int m_cols = 10;

    char** m_player1PersonalKey = nullptr;
    char** m_player2PersonalKey = nullptr;
    char** m_player1OpponentKey = nullptr;
    char** m_player2OpponentKey = nullptr;

    int m_shipAmount = 0;
    int m_shipNumber = 0;

    int m_player1ShipAmount = 0;
    int m_player2ShipAmount = 0;

    char m_tempCol = ' ';
    int m_shipCol = 0;
    int m_shipRow = 0;

    int m_playerChoice = 0;

    int m_player1ShipsRemaining = 0;
    int m_player2ShipsRemaining = 0;
    bool m_setupIsFinished = false;
    bool m_isFinished = false;
    int m_winner = 0;



  public:
    Executive();

    void boardSetup();
    void playGame();
    void printMenu();
    void printPlayer1PersonalKey();
    void printPlayer2PersonalKey();
    void printPlayer1OpponentKey();
    void printPlayer2OpponentKey();
    void player1Turn();
    void player2Turn();
    void player1Attack();
    void player2Attack();
    bool checkIfFinished();
    ~Executive()
    {
      for (int i = 0; i < m_rows; i++)
      {
        delete[] m_player1PersonalKey[i];
        delete[] m_player2PersonalKey[i];
        delete[] m_player1OpponentKey[i];
        delete[] m_player2OpponentKey[i];
      }
      
      delete[] m_player1PersonalKey;
      delete[] m_player2PersonalKey;
      delete[] m_player1OpponentKey;
      delete[] m_player2OpponentKey;
    }

};
#endif