#pragma once
#include <map>
#include <mutex>
#include <string>
#include <set>

class BreakPointContainer
{
public:
	bool ContainsFunc(const char* funcPath);
	bool ContainsFunc(const std::string& funcPath);
	std::set<unsigned short> GetBreakPoints(const char* funcPath);
	std::set<unsigned short> GetBreakPoints(const std::string& funcPath);
	bool HasBreakPoint(const std::string& funcPath, unsigned short location);
	void AddBreakPoint(const char* funcPath, unsigned short location);
	void AddBreakPoint(const std::string& funcPath, unsigned short location);
	bool RemoveBreakPoint(const char* funcPath, unsigned short location);
	bool RemoveBreakPoint(const std::string& funcPath, unsigned short location);
	void ClearBreakPoints();
private:

	std::map<std::string, std::set<unsigned short>> BreakpointMap;
	std::mutex BreakpointMutex;
};