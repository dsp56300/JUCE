#pragma once

namespace juce
{

class StandaloneOptionsMenuHandler
{
public:
    virtual ~StandaloneOptionsMenuHandler() = default;
    virtual void showStandaloneOptionsMenu() = 0;

};

} // namespace juce
