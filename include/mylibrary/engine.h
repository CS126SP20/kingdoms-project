//
// Created by Eric Xu on 4/20/20.
//

#ifndef FINALPROJECT_ENGINE_H
#define FINALPROJECT_ENGINE_H

#include <vector>

#include "card.h"
#include "player.h"

using std::vector;

namespace mylibrary {

class Engine {

 private:
  void CreateDeck();
  void DistributeCards();
  void PlayRounds();
  void CheckEndGame();
  vector<Card> cards_used;
  vector<Player> players;
  Card played_card;
  bool responding = false;

  const int NUM_PLAYERS = 2;
  const int MAX_HEALTH = 3;
  const int DRAW_CARDS = 1;

 public:
  Engine();
  Player& GetPlayer(int pos);
  Player& GetOpponent(int pos);
  void Dodge();
  void PlayCard(Card& card);

  int current_player = 0;
  int previous_player = 0;
  vector<Card> deck;
  Card discard;

  void PlayAction();
};

}

#endif  // FINALPROJECT_ENGINE_H
