#include "BreakPointContainer.h"

bool BreakPointContainer::ContainsFunc(const char* funcPath)
{
	const std::string str(funcPath);
	return ContainsFunc(str);
}

bool BreakPointContainer::ContainsFunc(const std::string& funcPath)
{
	std::lock_guard lock(BreakpointMutex);

	return BreakpointMap.find(funcPath) != BreakpointMap.end();
}

bool BreakPointContainer::HasBreakPoint(const std::string& funcPath, unsigned short location)
{
	std::lock_guard lock(BreakpointMutex);

	if (const auto pair = BreakpointMap.find(funcPath); pair != BreakpointMap.end())
	{
		return pair->second.find(location) != pair->second.end();
	}
	return false;
}

void BreakPointContainer::AddBreakPoint(const char* funcPath, unsigned short location)
{
	const std::string str(funcPath);
	AddBreakPoint(str, location);
}

void BreakPointContainer::AddBreakPoint(const std::string& funcPath, unsigned short location)
{
	std::lock_guard lock(BreakpointMutex);

	if (const auto pair = BreakpointMap.find(funcPath); pair != BreakpointMap.end())
	{
		auto& breakPoints = pair->second;
		breakPoints.insert(location);
	}
	else
	{
		BreakpointMap.emplace(funcPath, std::set{ location });
	}
}

bool BreakPointContainer::RemoveBreakPoint(const char* funcPath, unsigned short location)
{
	const std::string str(funcPath);
	return RemoveBreakPoint(str, location);
}

bool BreakPointContainer::RemoveBreakPoint(const std::string& funcPath, unsigned short location)
{
	std::lock_guard lock(BreakpointMutex);

	if (const auto iter = BreakpointMap.find(funcPath); iter != BreakpointMap.end())
	{
		auto& breakPoints = iter->second;
		if (breakPoints.erase(location) > 0)
		{
			if (breakPoints.empty())
			{
				BreakpointMap.erase(iter);
			}
			return true;
		}
	}
	return false;
}

void BreakPointContainer::ClearBreakPoints()
{
	std::lock_guard lock(BreakpointMutex);

	BreakpointMap.clear();
}
