#include "Player.h"

Player::Player() {

}

int Player::getPlayerMoney() {
	return money;
}

int Player::getPlayerHitpoints() {
	return lives;
}

void Player::playerHitpoints(Enemy enemy) {
	if (lives == 0) {
		//Game Over
	}
}

int Player::getHealth() {
	

	return lives;
}