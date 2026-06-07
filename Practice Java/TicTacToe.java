import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Simple Tic-Tac-Toe game (2-player local) using Swing.
 * Save as TicTacToe.java, compile and run.
 */
public class TicTacToe extends JFrame implements ActionListener {
    private JButton[][] cells = new JButton[3][3];
    private JLabel statusLabel;
    private JLabel scoreLabel;
    private char currentPlayer = 'X';
    private int scoreX = 0, scoreO = 0, draws = 0;

    public TicTacToe() {
        setTitle("Tic-Tac-Toe");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(360, 460);
        setLocationRelativeTo(null);
        setLayout(new BorderLayout(8, 8));

        // Board panel
        JPanel board = new JPanel(new GridLayout(3, 3, 5, 5));
        board.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        Font cellFont = new Font(Font.SANS_SERIF, Font.BOLD, 48);
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                JButton b = new JButton("");
                b.setFont(cellFont);
                b.setFocusPainted(false);
                b.addActionListener(this);
                cells[r][c] = b;
                board.add(b);
            }
        }

        // Top panel: status + score
        JPanel top = new JPanel(new BorderLayout());
        statusLabel = new JLabel("Turn: X");
        statusLabel.setHorizontalAlignment(SwingConstants.CENTER);
        statusLabel.setFont(new Font(Font.SANS_SERIF, Font.PLAIN, 18));
        top.add(statusLabel, BorderLayout.CENTER);

        scoreLabel = new JLabel(getScoreText());
        scoreLabel.setHorizontalAlignment(SwingConstants.CENTER);
        scoreLabel.setFont(new Font(Font.SANS_SERIF, Font.PLAIN, 14));
        top.add(scoreLabel, BorderLayout.SOUTH);

        // Bottom: controls
        JPanel bottom = new JPanel();
        JButton restart = new JButton("Restart Round");
        restart.addActionListener(e -> resetBoard());
        JButton resetScores = new JButton("Reset Scores");
        resetScores.addActionListener(e -> {
            scoreX = scoreO = draws = 0;
            scoreLabel.setText(getScoreText());
            resetBoard();
        });

        bottom.add(restart);
        bottom.add(resetScores);

        add(top, BorderLayout.NORTH);
        add(board, BorderLayout.CENTER);
        add(bottom, BorderLayout.SOUTH);
    }

    private String getScoreText() {
        return String.format("Score - X: %d   O: %d   Draws: %d", scoreX, scoreO, draws);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        JButton clicked = (JButton) e.getSource();
        if (!clicked.getText().equals("")) return; // already occupied

        clicked.setText(String.valueOf(currentPlayer));
        clicked.setEnabled(false);

        if (checkWin(currentPlayer)) {
            if (currentPlayer == 'X') scoreX++; else scoreO++;
            statusLabel.setText("Player " + currentPlayer + " wins!");
            scoreLabel.setText(getScoreText());
            disableAll();
            showWinDialog("Player " + currentPlayer + " wins!");
            return;
        }

        if (isBoardFull()) {
            draws++;
            statusLabel.setText("It's a draw!");
            scoreLabel.setText(getScoreText());
            showWinDialog("It's a draw!");
            return;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        statusLabel.setText("Turn: " + currentPlayer);
    }

    private void showWinDialog(String message) {
        int choice = JOptionPane.showOptionDialog(
            this,
            message + "\nPlay another round?",
            "Round Over",
            JOptionPane.YES_NO_OPTION,
            JOptionPane.INFORMATION_MESSAGE,
            null,
            new Object[]{"Yes", "No"},
            "Yes"
        );
        if (choice == JOptionPane.YES_OPTION) {
            resetBoard();
        } else {
            // Keep board disabled; user can click "Restart Round" or close the window.
        }
    }

    private boolean checkWin(char p) {
        String ps = String.valueOf(p);
        // Rows & columns
        for (int i = 0; i < 3; i++) {
            if (cells[i][0].getText().equals(ps) &&
                cells[i][1].getText().equals(ps) &&
                cells[i][2].getText().equals(ps)) return true;

            if (cells[0][i].getText().equals(ps) &&
                cells[1][i].getText().equals(ps) &&
                cells[2][i].getText().equals(ps)) return true;
        }
        // Diagonals
        if (cells[0][0].getText().equals(ps) &&
            cells[1][1].getText().equals(ps) &&
            cells[2][2].getText().equals(ps)) return true;

        if (cells[0][2].getText().equals(ps) &&
            cells[1][1].getText().equals(ps) &&
            cells[2][0].getText().equals(ps)) return true;

        return false;
    }

    private boolean isBoardFull() {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++)
                if (cells[r][c].getText().equals("")) return false;
        return true;
    }

    private void disableAll() {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++)
                cells[r][c].setEnabled(false);
    }

    private void resetBoard() {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++) {
                cells[r][c].setText("");
                cells[r][c].setEnabled(true);
            }
        currentPlayer = 'X';
        statusLabel.setText("Turn: " + currentPlayer);
    }

    public static void main(String[] args) {
        // Swing should be started on the Event Dispatch Thread
        SwingUtilities.invokeLater(() -> {
            TicTacToe t = new TicTacToe();
            t.setVisible(true);
        });
    }
}
