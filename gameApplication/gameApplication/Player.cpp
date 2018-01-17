#include "Player.h"

Player::Player() {

}

String Player::getPlayerMoney() {
	String s = std::to_string(money);
	return s;
}

String Player::getHealth() {
	String s = std::to_string(lives);
	return s;
}