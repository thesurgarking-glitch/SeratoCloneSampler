#pragma once
#include <JuceHeader.h>

class SeratoCloneSamplerAudioProcessor  : public juce::AudioProcessor
{
public:
    SeratoCloneSamplerAudioProcessor();
    ~SeratoCloneSamplerAudioProcessor() override;

    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    const juce::String getName() const override;
    bool acceptsMidi() const override { return true; }
    bool producesMidi() const override { return false; }
    double getTailLengthSeconds() const override { return 0.0; }

private:
    juce::AudioFormatManager formatManager;
    juce::AudioTransportSource transportSource;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SeratoCloneSamplerAudioProcessor)
};
