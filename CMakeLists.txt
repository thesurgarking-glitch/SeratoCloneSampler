cmake_minimum_required(VERSION 3.25)
project(SeratoCloneSampler)

# Path to JUCE folder (add as submodule)
set(JUCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/JUCE)
add_subdirectory(${JUCE_DIR} JUCE)

juce_add_plugin(SeratoCloneSampler
    COMPANY_NAME "YourName"
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT TRUE
    NEEDS_MIDI_OUTPUT FALSE
    IS_MIDI_EFFECT FALSE
    AU TRUE
    VST3 TRUE
    CLAP TRUE
    FORMATS AU VST3 CLAP
)

target_sources(SeratoCloneSampler PRIVATE
    Source/PluginProcessor.cpp
    Source/PluginProcessor.h
    Source/PluginEditor.cpp
    Source/PluginEditor.h
)

target_link_libraries(SeratoCloneSampler PRIVATE
    juce::juce_audio_utils
    juce::juce_audio_processors
    juce::juce_gui_extra
)
