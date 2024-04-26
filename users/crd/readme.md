# CRD's simple keymaps


Column Stagger:

![colstag](https://i.imgur.com/kGldbCb.png)

Row Stagger:
![rowstag](https://i.imgur.com/xdc3RWP.png)

This has been my attempt to work my way down to a simple and minimal base keymap that I can use to generate something
consistent that I can use across many physical layouts. I make pretty heavy use of tap/hold for layers and modifiers
allowing me to keep it down to only three layers. Grug smol brane not understund more.

This has been heavily influenced by [manna-harbour's Miryoku layout](https://github.com/manna-harbour/miryoku/). For no
good reason, I decided to develop my choices for placement somewhat naturally (to me) over time instead of just using
that. If you're reading this, you're almost certainly better off just using Miryoku and stop fussing about with your
own.

Speaking of influences, go check out [drashna's userspace](https://github.com/qmk/qmk_firmware/tree/master/users/drashna).
The only reason any of this works as well for me as is does is because of examples that he has provided to the community.

Taking inspiration from [ZMK](https://zmk.dev/docs/user-setup#summary), I have chosen to include my own personalized
[build definitions](/.github/workflows/build.yml) in this branch to build the board from keymaps defined here.

Don't tell drasha, but I have also included the [kmonad](https://github.com/kmonad/kmonad) [config](./config.kbd) that I
use when I can't build a QMK firmware for some reason. This branch would never be accepted upstream anyway so I don't
think it will ever be a problem.
