#include "../includes/Logger.h"
#include <fstream>
#include <sstream>
#include <iostream>

void Logger::write(std::string log)
{
    std::ofstream file;

    try
    {
        // Öffnet die Log-Datei, wenn keine existiert wird eine erstellt
        file.open("../log.txt", std::ios::app);

        if(file.is_open())
        {
            // Schreibe Log in Datei
            file << log << std::endl;
            file.close();
        }
        else 
        {
            throw std::runtime_error("Log-Datei konnte nicht geöffnet werden.");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Ein Fehler ist aufgetreten: " << e.what() << '\n';
    }   
}

std::string Logger::getLog()
{
    // Log-Datei welche gelesen wird
    std::ifstream file;
    // Variable zum speichern des Inhalt der Log-Datei
    std::string content;

    try
    {
        // Datei im Lesemodus öffnen
        file.open("../log.txt");
        if(file.is_open())
        {
            // Variable zum zwischenspeichern des Inhalt der Log-Datei
            std::stringstream buffer;
            buffer << file.rdbuf();
            file.close();
            // Gibt den Inhalt der Datei als String zurück
            content = buffer.str();
        }
        else 
        {
            throw std::runtime_error("Datei konnte nicht geöffnet werden.");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Ein Fehler ist aufgetreten" << e.what() << '\n';
    }

    return content;
}