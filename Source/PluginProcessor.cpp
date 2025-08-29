#include "PluginProcessor.h"
#include "PluginEditor.h"

SeratoCloneSamplerAudioProcessor::SeratoCloneSamplerAudioProcessor() {
    formatManager.registerBasicFormats(); // WAV, AIFF, MP3
}

SeratoCloneSamplerAudioProcessor::~SeratoCloneSamplerAudioProcessor() {}

void SeratoCloneSamplerAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock) {
    transportSource.prepareToPlay(samplesPerBlock, sampleRate);
}

void SeratoCloneSamplerAudioProcessor::releaseResources() {
    transportSource.releaseResources();
}

void SeratoCloneSamplerAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer&) {
    buffer.clear();
    juce::AudioSourceChannelInfo info(&buffer, 0, buffer.getNumSamples());
    transportSource.getNextAudioBlock(info);
}
