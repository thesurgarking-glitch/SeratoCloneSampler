#include "PluginProcessor.h"
#include "PluginEditor.h"

SeratoCloneSamplerAudioProcessorEditor::SeratoCloneSamplerAudioProcessorEditor (SeratoCloneSamplerAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (600, 400);
}

void SeratoCloneSamplerAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::black);
    g.setColour (juce::Colours::white);
    g.setFont (20.0f);
    g.drawFittedText ("Serato Clone Sampler", getLocalBounds(), juce::Justification::centred, 1);
}

void SeratoCloneSamplerAudioProcessorEditor::resized() {}
