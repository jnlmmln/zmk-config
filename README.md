# Miryoku ZMK Configuration for w-40

This is a complete Miryoku-based ZMK configuration for the w-40 40-key keyboard. The configuration implements the ergonomic Miryoku layout principles adapted for the w-40's 4x10 physical layout.

## Features

- **Miryoku Layout**: Based on the renowned Miryoku layout with Colemak Mod-DH as the default alpha layout
- **Homerow Mods**: Efficient modifier keys on the home row for ergonomic typing
- **Layer-based Design**: Access to all keys through logical layers without stretching
- **Combos**: Essential keys accessible through key combinations
- **Optimized for 40%**: Specifically adapted for the w-40's 40-key layout

## Layout Overview

### Base Layer (Colemak Mod-DH)
```
╭─────┬─────┬─────┬─────┬─────╮ ╭─────┬─────┬─────┬─────┬─────╮
│  Q  │  W  │  F  │  P  │  B  │ │  J  │  L  │  U  │  Y  │  ;  │
├─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┤
│GUI A│ALT R│CTL S│SFT T│  G  │ │  M  │SFT N│CTL E│ALT I│GUI O│
├─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┤
│  Z  │  X  │  C  │  D  │  V  │ │  K  │  H  │  ,  │  .  │  /  │
├─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┤
│ ESC │ TAB │MED  │NAV  │MOU  │ │ SYM │ NUM │ FUN │BSPC │ DEL │
│     │     │ESC  │SPC  │TAB  │ │ ENT │BSPC │ DEL │     │     │
╰─────┴─────┴─────┴─────┴─────╯ ╰─────┴─────┴─────┴─────┴─────╯
```

### Layer Functions

- **NAV**: Navigation, cursor movement, and text editing
- **SYM**: Symbols and shifted numbers
- **NUM**: Numbers and numeric operators
- **FUN**: Function keys and system controls
- **MEDIA**: Media controls and volume
- **MOUSE**: Mouse keys (placeholder for future use)

## Key Combos

The following combos are available for frequently used keys:

- **Escape**: `W + F` (positions 1 + 2)
- **Enter**: `U + Y` (positions 7 + 8)
- **Tab**: `R + S` (positions 11 + 12)
- **Backspace**: `E + I` (positions 17 + 18)
- **Delete**: `I + O` (positions 18 + 19)
- **Caps Word**: `T + N` (positions 13 + 16)

## Homerow Mods

The home row keys act as modifiers when held:

- **Left hand**: GUI (A), Alt (R), Ctrl (S), Shift (T)
- **Right hand**: Shift (N), Ctrl (E), Alt (I), GUI (O)

## Layers

### NAV Layer
Navigation and text editing commands:
- Arrow keys on right hand (J/K/L/;)
- Page up/down, Home/End
- Copy/paste shortcuts
- Selection commands

### SYM Layer
Symbols and punctuation:
- Brackets, parentheses, braces
- Mathematical operators
- Special characters
- Shifted number symbols

### NUM Layer
Numbers and numeric operators:
- Number row (1-9, 0)
- Numeric keypad layout
- Mathematical operators
- Brackets for formulas

### FUN Layer
Function keys and system controls:
- F1-F12 function keys
- System keys (Print Screen, Scroll Lock, Pause)
- Menu key
- Additional system functions

### MEDIA Layer
Media and volume controls:
- Play/pause, next/previous track
- Volume up/down/mute
- Media stop
- Brightness controls (if supported)

## Customization

### Changing the Base Layout

To switch from Colemak Mod-DH to QWERTY, edit `config/miryoku.h`:

```c
// Comment out the default
// #define MIRYOKU_ALPHAS_COLEMAKDH

// Uncomment QWERTY
#define MIRYOKU_ALPHAS_QWERTY
```

Available layouts:
- `MIRYOKU_ALPHAS_COLEMAKDH` (default)
- `MIRYOKU_ALPHAS_QWERTY`
- `MIRYOKU_ALPHAS_DVORAK`
- `MIRYOKU_ALPHAS_COLEMAK`

### Adjusting Timing

You can adjust the hold-tap timing in `config/miryoku.h`:

```c
#define MIRYOKU_HOMEROW_MODS_TAPPING_TERM_MS 280
#define MIRYOKU_HOMEROW_MODS_QUICK_TAP_MS 175
#define MIRYOKU_LAYER_TAP_TAPPING_TERM_MS 200
```

### Navigation Style

Change navigation key arrangement:

```c
// Default home position line nav
#define MIRYOKU_NAV_DEFAULT

// Or use inverted-T arrangement
// #define MIRYOKU_NAV_INVERTEDT

// Or use Vi-style navigation
// #define MIRYOKU_NAV_VI
```

## Building

This configuration is designed to work with GitHub Actions. Simply:

1. Fork this repository
2. Enable GitHub Actions in your fork
3. Push changes to trigger a build
4. Download the firmware from the Actions tab

For local building:
1. Set up the ZMK build environment
2. Clone this repository
3. Build with: `west build -p -b nice_nano_v2 -- -DSHIELD=w-40`

## Configuration Files

- `config/w-40.keymap` - Main keymap definition
- `config/w-40.conf` - ZMK configuration options
- `config/miryoku.h` - Miryoku-specific customizations
- `build.yaml` - GitHub Actions build configuration

## Hardware Support

This configuration is optimized for:
- **Board**: nice!nano v2
- **Shield**: w-40
- **Layout**: 40 keys in 4x10 arrangement

## Credits

This configuration is based on:
- **Miryoku**: The ergonomic keyboard layout by @manna-harbour
- **Miryoku ZMK**: The ZMK implementation at https://github.com/manna-harbour/miryoku_zmk
- **ZMK Firmware**: The modern keyboard firmware

## Resources

- [Miryoku Layout](https://github.com/manna-harbour/miryoku)
- [Miryoku ZMK](https://github.com/manna-harbour/miryoku_zmk)
- [ZMK Firmware](https://zmk.dev/)
- [w-40 Keyboard](https://github.com/tzangapurpla/w-40)

## Learning the Layout

### Tips for Beginners

1. **Start Slowly**: Begin with the base layer and learn the Colemak Mod-DH layout
2. **Practice Homerow Mods**: The modifier keys on the home row are crucial for efficiency
3. **Use Combos**: Essential keys like Escape and Enter are available through combos
4. **Layer Navigation**: Learn the layer keys - they're your gateway to all functionality
5. **Customize**: Don't hesitate to modify the configuration to match your workflow

### Training Resources

- Online typing trainers that support Colemak
- Practice homerow mods with simple exercises
- Use the layout daily for all typing tasks
- Join the Miryoku community for tips and support

### Common Adjustments

- If homerow mods feel too sensitive, increase the tapping term
- If layer switches feel slow, decrease the tapping term
- Adjust combo timeout if combos are too sensitive or not sensitive enough
- Modify key positions based on your hand size and comfort

## Troubleshooting

### Common Issues

1. **Accidental Modifiers**: Increase `MIRYOKU_HOMEROW_MODS_TAPPING_TERM_MS`
2. **Missed Layer Switches**: Decrease `MIRYOKU_LAYER_TAP_TAPPING_TERM_MS`
3. **Combo Misfires**: Adjust `MIRYOKU_COMBO_TIMEOUT_MS`
4. **Build Errors**: Check that all file paths are correct and syntax is valid

### Getting Help

- Check the ZMK documentation for configuration options
- Review the Miryoku ZMK repository for examples
- Join the ZMK Discord for community support
- File issues on GitHub if you find bugs

## License

This configuration is licensed under the MIT License, same as ZMK firmware.