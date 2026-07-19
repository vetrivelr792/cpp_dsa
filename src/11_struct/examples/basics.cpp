#include <iostream>

struct Rectangle {
  int length;
  int breadth;
};

struct Card {
  int faceValue;
  int shape;
  int colour;
};

int main() {

  Rectangle r;

  r.length = 10;
  r.breadth = 20;

  struct Card cards[52];

  cards[0] = {1, 2, 3};

  std::cout << "face value: " << cards[0].faceValue
            << "shape: " << cards[0].shape << "colour: " << cards[0].colour;

  return 0;
}