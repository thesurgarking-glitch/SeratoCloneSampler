#pragma once
#include <JuceHeader.h>
#include "PluginProcessor.h"

class SeratoCloneSamplerAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    SeratoCloneSamplerAudioProcessorEditor (SeratoCloneSamplerAudioProcessor&);
    ~SeratoCloneSamplerAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    SeratoCloneSamplerAudioProcessor& audioProcessor;
};
