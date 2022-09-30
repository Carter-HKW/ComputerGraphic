#ifndef GAME_H
#define GAME_H

#include <vector>
#include "game/GameObject.h"
#include "game/ShaderGroup.h"

class Game {
 public:
  Game();

  std::vector<ShaderGroup> shaderGroups;
  std::vector<GameObject*> ballList;
  std::vector<GameObject*> wallList;
  void updatePositions(GLfloat deltaTime);
  void addShaderGroup(ShaderGroup shaderGroup);

 private:
  GLboolean checkCollision(GameObject& o1, GameObject& o2);
  void performCollision(int objNum1, int objNum2);
};



#endif