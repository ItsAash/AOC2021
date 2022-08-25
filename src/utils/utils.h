/**
 * @brief Read File
 * @param fileName Location of the file that you are trying to read
 * @param lines Address of the array that stores the lines of the file
 * @return True if file is read successfully, false otherwise
 * 
 */
bool readFileString(std::string fileName, std::vector<std::string> &lines);
bool readFileInt(std::string fileName, std::vector<int> &lines);
