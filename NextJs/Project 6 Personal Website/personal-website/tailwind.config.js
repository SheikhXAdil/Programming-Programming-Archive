/** @type {import('tailwindcss').Config} */
const defaultTheme = require('tailwindcss/defaultTheme')

module.exports = {
  content: [
    './src/pages/**/*.{js,ts,jsx,tsx,mdx}',
    './src/components/**/*.{js,ts,jsx,tsx,mdx}',
    './src/app/**/*.{js,ts,jsx,tsx,mdx}',
  ],
  theme: {
    screens: {
      'xs': '430px',
      ...defaultTheme.screens,
    },
    colors: {
      "bgPrimary": "#15133c",
      "bgSecondary": "#181730",
      "bgTertiary": "#292750",
      "fontPrimary": "#F1EEE9",
      "fontSecondary": "#EC994B",
      "borderPrimary": "#555297",
      "borderSecondary": "#EC994B",
      "linkHoverColor": "#a39ef0"
    },
  },
  plugins: [],
}
