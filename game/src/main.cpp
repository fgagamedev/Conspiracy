#include <iostream>
#include "config.h"
#include <memory>
#include "engine.hpp"
#include "game_scene.hpp"
#include "lose_scene.hpp"
#include "win_scene.hpp"
#include "menu_scene.hpp"
#include "alien.hpp"
#include "stage_one.hpp"
#include "stage_two.hpp"
#include "stage_three.hpp"
#include "stage_four.hpp"
#include "stage_five.hpp"
#include "choose_stage_scene.hpp"
#include "finish_scene.hpp"
#include "tutorial_scene.hpp"

using namespace engine;

int main(int, char**){
    loadEngine();

    /*** Initialization of scenes ***/
    getSceneManager()->addScene(std::make_shared<MenuScene>(0));
    getSceneManager()->addScene(std::make_shared<StageOne>(1, ASSETS_PATH("/tiledMaps/Stage1.txt")));
    getSceneManager()->addScene(std::make_shared<StageTwo>(2, ASSETS_PATH("/tiledMaps/Stage2.txt")));
    getSceneManager()->addScene(std::make_shared<StageThree>(3, ASSETS_PATH("/tiledMaps/Stage3.txt")));
    getSceneManager()->addScene(std::make_shared<StageFour>(4, ASSETS_PATH("/tiledMaps/Stage4.txt")));
    getSceneManager()->addScene(std::make_shared<StageFive>(5, ASSETS_PATH("/tiledMaps/Stage5.txt")));
    getSceneManager()->addScene(std::make_shared<LoseScene>(6));
    getSceneManager()->addScene(std::make_shared<WinScene>(7));
    getSceneManager()->addScene(std::make_shared<ChooseStageScene>(8));
    getSceneManager()->addScene(std::make_shared<FinishScene>(9));

    getSceneManager()->addScene(std::make_shared<TutorialScene>(20, ASSETS_PATH("/sprites/tutorial_bilu.png"), 1));
    getSceneManager()->addScene(std::make_shared<TutorialScene>(21, ASSETS_PATH("/sprites/tutorial_saida.png"), 20));
    getSceneManager()->addScene(std::make_shared<TutorialScene>(22, ASSETS_PATH("/sprites/tutoriaL_comandos.png"), 21));
    getSceneManager()->addScene(std::make_shared<TutorialScene>(24, ASSETS_PATH("/sprites/tutorial_temer2.png"), 3));
    getSceneManager()->addScene(std::make_shared<TutorialScene>(23, ASSETS_PATH("/sprites/tutorial_temer1.png"), 24));
    getSceneManager()->addScene(std::make_shared<TutorialScene>(25, ASSETS_PATH("/sprites/tutorial_varginha1.png"), 26));
    getSceneManager()->addScene(std::make_shared<TutorialScene>(26, ASSETS_PATH("/sprites/tutorial_varginha2.png"), 2));

    getSceneManager()->loadScene(0);

    run();
    return 0;
}
