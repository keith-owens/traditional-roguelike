#include "flecs.h"
#include "raylib-common.h"

int main(int argc, char* argv[])
{
    flecs::world world;
    raylib::InitWindow(800, 480, "Roguelike");
    raylib::TraceLog(raylib::LOG_INFO, "Flecs and Raylib were initialized.");

    raylib::CloseWindow();
    return 0;
}